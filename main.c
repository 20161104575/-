//
//  main.c
//  numberpaixu
//
//  Created by 20161104575 on 17/6/15.
//  Copyright © 2017年 20161104575. All rights reserved.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    int a[11];
    int n,j,i;
    FILE *fp1,*fp2;
    fp1=fopen("//Users//a20161104575//Desktop//numberone.txt","w+");
    fp2=fopen("//Users//a20161104575//Desktop//numbertwo.txt","r+");
    if(fp2==NULL)
    {
        printf("打开文件错误");
    }
    else
    {

            for(i = 1; i <= 10; i++)
            {
                fscanf(fp2,"%d",&a[i]);
            }
            
            for (j = 1; j <= 10; j++)
            {
                for (i = 1; i <= 10-j; i++)
                {
                    if(a[i] > a[i + 1])
                    {
                        n = a[i];
                        a[i] = a[i+1];
                        a[i+1] = n;
                    }
                }
            }
            for(i = 1; i <= 10; i++)
            {
                    printf("%d ",a[i]);
                    fprintf(fp1,"%d\n",a[i]);
            }
        fclose(fp1);
        fclose(fp2);
    }
    return 0;
}
