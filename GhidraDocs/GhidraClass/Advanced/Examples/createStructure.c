/* ###
 * IP: GHIDRA
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include<stdlib.h>

int main()
{
	char input_string[100];
	int mid,i,k,j;
	scanf("%s",input_string);
	mid=strlen(input_string)/2;
	for(i=1;i<=strlen(input_string);i++)
	{
		int temp=(i*2)-1,count=0;
		for(j=2*strlen(input_string)-1;j>=i;j--)
		{
			if(abs(temp)==j)
			{
				for(k=temp;count<i;k++)
				{
					if(count>=7)
					{
						printf("%c",input_string[(mid+count)%10]);
					}
					else
					{
						printf("%c",input_string[(mid+count)%strlen(input_string)]);
					}
					count++;
				}
			}
		}
		printf("\n");
	}
}

typedef struct {
    long a;
    int b;
    char * c;
    short d;
} exampleStruct;

typedef exampleStruct * exampleStructPtr;


void setFirstAndThird(exampleStructPtr ptr, long x, char *str){
    ptr->a = x;
    ptr->c = str;
}

void setSecondAndFourth(exampleStructPtr ptr, int y, short z){
    ptr->b = y;
    ptr->d = z;
}
