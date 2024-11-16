#include <iostream>

int main() {
    const int n = 10;
    int arr[n];

 
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        
        bool exist = false;
        for (int j = 0; j < i; j++) {
            if (arr[j] == arr[i]) {
                exist = true;
                break;
            }
        }

        
        if (exist == false) {
            bool HasDublicate = false;

        
            for (int k = i + 1; k < n; k++) {
                if (arr[i] == arr[k]) {
                    HasDublicate = 1;
                    break;
                }
            }

            if (HasDublicate == 1) {
                std::cout << "Duplicat e " << arr[i] << "-y " << std::endl;
                count++;
            }
        }
    }

    if (count == 0) {
        std::cout << "Dublikat chka" << std::endl;
    }


    std::cout << "Dublikatnreri qanaky " << count << " e";

    return 0;
}
