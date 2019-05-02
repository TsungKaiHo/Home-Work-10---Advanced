//
//  main.cpp
//  進階題 10
//
//  Created by 何宗愷 on 2019/4/26.
//  Copyright © 2019 何宗愷. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    int number;
    int i;
   
    printf("質因數分解-請輸入一個正整數：");
    scanf("%d",& number);
    printf ("質因數%d分解的質因數為：",number);
    for ( i = 2 ; i <= number ; i ++) {
        while ( number != i ) {
            if ( number % i == 0 ) {
                printf ( "%d*" , i );
                number = number / i ;
            } else
                break ;
        }
    }
    printf ( "%d \n " , number );
    return 0;
}
