#include <iostream>
using namespace std;

void fcfs(int burst[], int n) {
    int waiting[n], turnaround[n];
    waiting[0] = 0;

    // Calculate waiting time for each process
    for (int i = 1; i < n; i++) {
        waiting[i] = burst[i - 1] + waiting[i - 1];
    }

    // Calculate turnaround time for each process
    for (int i = 0; i < n; i++) {
        turnaround[i] = burst[i] + waiting[i];
    }

    // Display results
    cout << "Process\tBurst Time\tWaiting Time\tTurnaround Time\n";
    for (int i = 0; i < n; i++) {
        cout << "P" << i + 1 << "\t" << burst[i] << "\t\t" << waiting[i] << "\t\t" << turnaround[i] << endl;
    }
}

int main() {
    int burst[] = {5, 8, 12, 6};  // Burst times for each process
    int n = sizeof(burst) / sizeof(burst[0]);
    fcfs(burst, n);
    return 0;
}
