#include <stdio.h>



//brute force approach
void selection_sort_algorithm(int *array,int array_size )
{
    int min = 0;
    int temp = 0;
    for(int i = 0; i<array_size - 2 ; i++)
    {
        min = i;
        for(int j = i+1 ; j<=array_size-1;j++)
        {
            if(array[j]<array[min])
            {
                min = j;
            }           
        }
        temp = array[i];
        array[i] = array[min];
        array[min] = temp;    
    }
}
//two variants of bubble sort are old-school
void bubble_sort(int *array,int array_size )
{
    int position = 0;
    for(int i = 0; i< array_size-1; i++)
    {
        position = i;
        for(int d=i+1; d<array_size;d++)
        {
            if(array[position]>array[d])
            {
                position = d;
            }
        }
        if(position != i)
        {
            int temp = array[i];
            array[i] = array[position];
            array[position] = temp;
        }
    }
}
int sequential_search(int * array,int array_size, int search )
{
    int i = 0;
    for(; i<array_size;i++)
    {
        if(array[i] == search)
        { 
            return i;
        }
    }
    i = 0;
    return i;
}

int brute_force_string_matching(char *str, char *pttrn)
{
    int i,j,k,text_length, pattern_length,position = -1;
    text_length = strlen(str);
    pattern_length = strlen(pttrn);
    if(pattern_length>text_length)
        return position;
    for(i = 0; i<= (text_length -pattern_length);i++)
    {
        position = k = i; 
        for(j = 0; j<pattern_length;j++)
        {
            if(pttrn[j]==str[k])
                k++;
            else
                break;
        }
        if(j==pattern_length)
            return position;
    }
    return position;
}

int main(void)
{

    printf("hello_world");
    return 0;
}