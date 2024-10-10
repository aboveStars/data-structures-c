#include <iostream>

using namespace std;

int main(){

    int* asks = nullptr;
    int currentSize = 0;

    while(true) {
        cout << "Please input your choice: " << endl;

        int value = 0;
        cin >> value;
        if(value == -1) break;

        int* temp = (int*)realloc(asks, sizeof(int) * (currentSize + 1));

        if(temp == nullptr) {
            cout << "Memory allocation error" << endl;
            return -1;
        }
        asks = temp;

        asks[currentSize] = value;

        currentSize++;
    }

    for(int i=0; i< currentSize && asks != nullptr; i++) {
        cout <<asks[i] << endl;
    }

    free(asks);

    return 0;
}
