void print(int a[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
}

struct array
{
    int arr[10];
    int length;
    int size;
};

void swap_by_ptr(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void append(struct array *a,int key){
    if(a->length<a->size){
        a->arr[a->length++]=key;
    }
}

void insert(struct array *a3,int key,int index){
    if(index<a3->length , index>=0){
    for(int i=a3->length;i>index;i--){
        a3->arr[i]=a3->arr[i-1];
    }
    a3->arr[index]=key;
    a3->length++;}
}


int sum(struct array *a){
    int sum=0;
    for(int i=0;i<a->length;i++){
        sum=sum+a->arr[i];
    }
    return sum;
}

int max(struct array *a){
    int maximum=a->arr[0];
    for(int i=0;i<a->length;i++){
        if(a->arr[i]>maximum){
            maximum=a->arr[i];
        }
    }
    return maximum;
}

void reverse(struct array *a){
    int j=a->length-1,i=0;
    int temp;
    while(j>=i){
        temp=a->arr[i];
        a->arr[i]=a->arr[j];
        a->arr[j]=temp;
        j--;
        i++;
    }
}

void left_shift(struct array *a){

    for(int i=0;i<a->length;i++){
        a->arr[i]=a->arr[i+1];
    }
}

void left_rotate(struct array *a){
    int b=a->arr[0];
    left_shift(a);
    a->arr[a->length-1]=b;
}

int insert_sort(struct array *a,int key){
    int i=a->length-1;
    if(a->length == a->size){
        return -1;
    }
    while(i>=0 && a->arr[i]>key){
        a->arr[i+1]=a->arr[i];
        i--;
    }
    a->arr[i+1]=key;
    return 1;
}

int is_Sorted(struct array *a){
    for(int i=0;i<a->length-1;i++){
        if(a->arr[i]>a->arr[i+1]){
            return -1;
            break;
        }
    }return 1;
} 

void negative_on_left(struct array *a){
    int i=0;
    int j=a->length-1;
    while(j>i){
        while(a->arr[i]<0){
            i++;
        }while(a->arr[j]>0){
            j--;
        }if(j>i){
            swap_by_ptr(a->arr+i,a->arr+j);
        }
    }
}