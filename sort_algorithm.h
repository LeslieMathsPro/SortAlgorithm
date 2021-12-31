#ifndef SORT_ALGORITHM_H
#define SORT_ALGORITHM_H

//#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;


template<class T>
class sort_algorithm
{
public:
	sort_algorithm(void);
	~sort_algorithm(void);
	//冒泡排序
	void buble_Sort(T* arr,int len);
	//快速排序
	void Quick_Sort(T* arr,int p,int r);
	int Partition(T* arr,int p,int r);
	int rand_Partiton(int* arr,int start_pos,int end_pos);
	//插入排序
	void Insert_Sort(T* arr,int len);
	//归并排序
	void Merge(T* arr,int p,int q, int r);
	void Merge_Sort(T* arr,int p,int r);
	//堆排序
	void Heap_Adjust(T* arr,int len,int adjust_node);
	void Gen_Heap(T* arr,int len);
	void Heapsort (T* arr,int len);
	//基数排序
	int Getpos(int input_value,int d);
	void RadixSort_LSD(int* arr,int len,int d);
	T* m_arr;
    //输出
    void get_info(T* arr){
        for (int i = 0; i < 7; i++){
            cout << arr[i] << endl;
        }
    }
};

#endif