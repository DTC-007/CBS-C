#include <stdio.h>

int findMin(int arr[], int len);   //��Ҫ����������һ�������鱾������һ��������ĳ���

int main() {
    int arr[] = {1, 4, -9, 2, -4, 7};
    int min = findMin(arr, 6);
    printf("��һ��С��0�����ǣ�%d", min);
}

int findMin(int arr[], int len) {
    for (int i = 0; i < len; ++i) {
        if(arr[i] < 0) return arr[i];   //���ж��ҵ���ֱ��return���ؼ��ɣ������Ļ�������ֱ�ӷ��ؽ�������ۺ��滹��û�д���û��ִ���꣬������������ֱ�ӽ�����
    }
    return 0;   //���û���ҵ��ͷ���0
}