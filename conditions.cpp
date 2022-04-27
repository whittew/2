#include "conditions.h"






void mass(Array* arr, int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i].Get() << " ";
    }
}
void(*select(int sum, Array* arr))(Array*, int)
{
    void (*actions[])(Array * arr, int n) = { Arrrevers, ArrsortV, ArrsortU };
    if (sum == arr[0].x) {
        return actions[0];
    }
    if (sum > arr[0].x) {
        return actions[1];
    }
    if (sum < arr[0].x) {
        return actions[2];
    }


}
int Arrsum(Array* arr, int n)
{
    int s = 0;
    for (int i = 0; i < n; i++) {
        s += arr[i].x;
    }
    return s;
}

void Arrrevers(Array* arr, int n)
{
    for (int i = 0, j = n - 1 ; i < j; ++i, --j) {
        Array t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
    }
}

void ArrsortV(Array* arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (arr[i].x > arr[j].x) {
                swap(arr[i].x, arr[j].x);
            }
        }
    }
}

void ArrsortU(Array* arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (arr[i].x < arr[j].x) {
                swap(arr[i].x, arr[j].x);
            }
        }
    }
}