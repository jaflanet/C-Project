#include<stdio.h>>

#define max 100 

char text[max];
void uppercase();
void geser(int key);

int main(){
    int key;
    printf("\nplain text : ");
    gets(text);
    printf("key: ");
	scanf("%d", &key);
    uppercase();
    geser(key);
	printf("hasil enkripsi: %s", text);

}

void uppercase (){
    int i;
    for (i = 0; text[i]!='\0'; i++) {
      if(text[i] >= 'a' && text[i] <= 'z') {
         text[i] = text[i] -32;
      }
   }
}
 
void geser (int key){
    char temp;
    int i;
       for(i = 0; text[i] != '\0'; ++i){
		temp = text[i];
	     if(temp >= 'A' && temp <= 'Z'){
			temp = temp + key;
			
			if(temp > 'Z'){
				temp = temp - 'Z' + 'A' - 1;
			}
			
			text[i] = temp;
		}
	}
 }