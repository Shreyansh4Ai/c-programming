int main(){
   int ram,shyam,ajay;
    printf("enter age of ram=");
    scanf("%d",&ram);
    printf("entered age of shyam=");
    scanf("%d",&shyam);
    printf("entered age of ajay=");
    scanf("%d",&ajay);
    if(ram>shyam){ // shyam is not in the race //
        if(ram>ajay)
        printf("ram is the greatest");
        else
        printf("ajay is the greatest");
    }
    else{ // ram is out of race now //
        if(shyam>ajay)
        printf("shyam is the greatest");
        else
        printf("ajay is the greatest");
    }
    return 0;
}