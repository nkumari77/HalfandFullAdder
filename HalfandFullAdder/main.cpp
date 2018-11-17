//
//  main.cpp
//  HalfandFullAdder
//
//  Created by Bishal Blue on 17/11/18.
//  Copyright © 2018 Bishal Blue. All rights reserved.
//

#include <iostream>
int carry = 0;

char halfadd(char bit1, char bit2){
    carry = bit1 & bit2;
    return (bit1 ^ bit2);
}

int main(int argc, const char * argv[]) {
    int result;
    std::cout<<"Half Adder"<<std::endl;
    std::cout<<"=\t=\t=\t="<<std::endl;
    std::cout<<"X\tY\tR\tC"<<std::endl;
    std::cout<<"-\t-\t-\t-"<<std::endl;
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            result = halfadd(i, j);
            std::cout<<i<<"\t"<<j<<"\t"<<result<<"\t"<<carry<<std::endl;
        }
    }
    std::cout<<"\nFull Adder"<<std::endl;
    std::cout<<"=\t=\t=\t=\t="<<std::endl;
    std::cout<<"X\tY\tZ\tR\tC"<<std::endl;
    std::cout<<"-\t-\t-\t-\t-"<<std::endl;
    
    int carry1 = carry;
    int carry2 = carry1 | carry;
    carry = carry2;
    
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            for(int k=0; k<2; k++){
                result = halfadd(i, j);
                int sum = halfadd(k, result);
                std::cout<<i<<"\t"<<j<<"\t"<<k<<"\t"<<sum<<"\t"<<carry<<std::endl;
            }
        }
    }
    
    return 0;
}
