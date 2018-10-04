//
//  main.cpp
//  Product Array
//
//  Created by Aj Gill on 10/4/18.
//  Copyright © 2018 Aj Gill. All rights reserved.
//

#include <iostream>

int main() {
    std::cout << "Please enter the size of the array\n";
    int size;
    std::cin >> size;
    int arr[size], it = 0, productArr[size], product = 1, zeroCounter = 0, initialZeroCounter = 0;
    std::cout << "Please enter the numbers of the array seperated by spaces\n";
    while(it < size){
        std::cin >> arr[it];
        it++;
    }
    for (int i=0; i<size; i++) {
        if(arr[i] == 0){
            initialZeroCounter ++;
            continue;
        }
        else{
            product *= arr[i];
        }
    }
    for (int j=0; j<size; j++) {
        if(arr[j] == 0 && zeroCounter == 0 && initialZeroCounter == 1){
            productArr[j] = product;
            zeroCounter++;
        }
        else if(arr[j] == 0 || zeroCounter > 0 || initialZeroCounter > 1){
            productArr[j] = 0;
            zeroCounter++;
        }
        else{
            productArr[j] = product/arr[j];
        }
    }
    std::cout << "\n";
    for (int z=0; z<size; z++) {
        std::cout << productArr[z] << " ";
    }
    std::cout << "\n";
    
}
