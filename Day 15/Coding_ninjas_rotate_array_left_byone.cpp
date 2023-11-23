/* Given an array arr containning n elements, rotate this array left once and return it.

Input : arr = [1, 2, 3, 4, 5]
Output : [2, 3, 4, 5, 1] */

import java.util.* ;
import java.io.*; 
public class Solution {
    static int[] rotateArray(int[] arr, int n) 
    {
        int a[]=new int[n];
        int k=0;
        for(int i=0;i<n;i++)
        {
            a[i]=-1;
        }
        for(int i=1;i<n;i++)
        {
            a[k]=arr[i];
            k++;
        }
        a[n-1]=arr[0];

        return a;
    }
}
