#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do    {
        height = get_int("enter the height: ");
    }
    
    while(height < 8 || height > 23);
    
    for(int i = height; i > 0;i--){
        for(int j = 0; j < i;j++){
              printf(" ");
        }
        for(int hashes = 0; hashes < height-i;hashes++){
             printf("#"); 
        }
        printf(" ");
        for(int hashes = 0; hashes < height-i;hashes++){
             printf("#"); 
        }
        printf("%s", "\n");
    }
}
