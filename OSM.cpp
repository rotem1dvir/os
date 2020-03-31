#include <iostream>
#include <bits/stdc++.h>
#include <sys/time.h>
#include "OSM.h"
using namespace std;
struct timeval ;



float getTime(timeval &start,timeval &end,int iterations){
    double time_taken;
    time_taken = (end.tv_sec - start.tv_sec) * 1e6;
    time_taken = (time_taken + (end.tv_usec -start.tv_usec)) * 1e-6;
    return time_taken/(iterations*20);
}

double osm_operation_time(unsigned int iterations){
    if(iterations<=0){
        return -1;
    }
    timeval start,end;
    gettimeofday(&start, NULL);
    ios_base::sync_with_stdio(false);
    int loopCounter = ceil(iterations / 20);
    int sum;
    for(int i =0; i < loopCounter; i++){
        sum = 1+1;
        sum = 1+1;
        sum = 1+1;
        sum = 1+1;
        sum = 1+1;
        sum = 1+1;
        sum = 1+1;
        sum = 1+1;
        sum = 1+1;
        sum = 1+1;
        sum = 1+1;
        sum = 1+1;
        sum = 1+1;
        sum = 1+1;
        sum = 1+1;
        sum = 1+1;
        sum = 1+1;
        sum = 1+1;
        sum = 1+1;
        sum = 1+1;

    }
    gettimeofday(&end, NULL);
    return getTime(start, end, loopCounter);
}


void myEmptyFunc(){}


double osm_function_time(unsigned int iterations){
    if(iterations<=0){
        return -1;
    }
    timeval start,end;
    gettimeofday(&start, NULL);
    ios_base::sync_with_stdio(false);
    int loopCounter = ceil(iterations / 20);

    for( int i =0; i <loopCounter;i++){
        myEmptyFunc();
        myEmptyFunc();
        myEmptyFunc();
        myEmptyFunc();
        myEmptyFunc();
        myEmptyFunc();
        myEmptyFunc();
        myEmptyFunc();
        myEmptyFunc();
        myEmptyFunc();
        myEmptyFunc();
        myEmptyFunc();
        myEmptyFunc();
        myEmptyFunc();
        myEmptyFunc();
        myEmptyFunc();
        myEmptyFunc();
        myEmptyFunc();
        myEmptyFunc();
        myEmptyFunc();


    }
    gettimeofday(&end, NULL);
    return getTime(start,end,loopCounter);

}





double osm_syscall_time(unsigned int iterations){
    if(iterations<=0){
        return -1;
    }
    timeval start,end;
    gettimeofday(&start, NULL);
    ios_base::sync_with_stdio(false);
    int loopCounter = ceil(iterations/20);

    for( int i =0; i <loopCounter;i++){
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;
        OSM_NULLSYSCALL;


    }
    gettimeofday(&end, NULL);
    return getTime(start,end,loopCounter);

}
