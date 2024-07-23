#include <iostream>
#include <string.h>
using namespace std;
class Solution {
public:
    string convert(string s, int numRows) {
        int digits = 0;
        while (s[digits]!='\0')
        {
            digits++;
        }
        int rows = numRows;
        int cols = 0;
        int arr[rows-1];
        for (int i = 0; i < rows-1; i++)
        {
            if (i == 0)
            {
                arr[i] = rows;
            }else
            {
                arr[i] = 1;
            }
        }
        int block_digits = rows + rows-2;
        int remainder = digits%block_digits;
        int cols = (digits/block_digits)*(rows-1);
        int i = 0;
        if (remainder <= rows)
        {
            cols++;
                
        }else
        {
            while (remainder!=0)
            {
                remainder -= arr[i];
                i++;
                cols++;
            }
        }
        int colspro = 0;
        int stringpro = 0;
        int position = rows-1;
        char box[rows][cols] = {'0'};
        for (int j = 0; j < cols; j++)
        {
            for (int k = 0; k < rows; k++)
            {
               if (colspro == 0)
               {
                   box[k][j] = s[stringpro];
                   stringpro++;
               }else{
                   if (k == position)
                   {
                    box[k][j] = s[stringpro];
                    stringpro++;
                   }  
               }
            }
            position--;
            colspro++;
        }
        string newstr[digits];
        int pro = 0;
        for (int j = 0; j< rows; j++)
        {
            for (int k = 0; k < cols; k++)
            {
                if(box[j][k] != '0'){
                    newstr[pro] = box[j][k];
                    pro++;
                }
            }  
        }   
    }
};
int main(){

}