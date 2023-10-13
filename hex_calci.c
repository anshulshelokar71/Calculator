#include<stdio.h>
#include<math.h>
#include<string.h>

int hex_num(char a){
    switch (a)
    {
    case 'A':
        return 10;
        break;
    case 'B':
        return 11;
        break;
    case 'C':
        return 12;
        break;
    case 'D':
        return 13;
        break;
    case 'E':
        return 14;
        break;
    case 'F':
        return 15;
        break;
    default:
        return (int)a-48;
        break;
    }
}

char dec_char(int n){
    switch (n)
    {
    case 10:
        return 'A';
        break;
    case 11:
        return 'B';
        break;
    case 12:
        return 'C';
        break;
    case 13:
        return 'D';
        break;
    case 14:
        return 'E';
        break; 
    case 15:
        return 'F';
        break;
    default:
        return (char)(n+48);
        break;
    }
}

int hex_dec(char str[]){
    int temp,i=0,num=0;
    int j=strlen(str);
    while(str[i]!='\0'){
        temp=hex_num(str[i]);
        num=num+temp*pow(16,j-1);
        j--;i++;
    }return num;
}

char dec_hex(int a){
    int i=0,j,num=0,temp;
    int arr[20];
    char s[20];
    char str;
    while(a>0){
        temp=a%16;
        arr[i++]=temp;
        a=a/16;
    }s[i]='\0';
    for (int j =i-1; j>=0; j--){
        str=dec_char(arr[j]);
        s[num++]=str;
    }
    printf("%s",s);
}
int main(){
    
    char str[15]="1DF";
    printf("%d\n",hex_dec(str));
    int a=479;
    printf("%s",dec_hex(a));


    
    return 0;
}