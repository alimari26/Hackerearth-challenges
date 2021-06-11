/*HackerMan has a message that he has coded in form of digits, which means that the message contains only numbers and nothing else. He is fearful that the enemy may get their hands on the secret message and may decode it. HackerMan already knows the message by heart and he can simply destroy it.

But he wants to keep it incase its needed in a worse situation. He wants to further encode the message in such a format which is not completely reversible. This way if enemies gets hold of the message they will not be completely able to decode the message.

Since the message consists only of number he decides to flip the numbers. The first digit becomes last and vice versa. For example, if there is 3769 in the code, it becomes 9673 now. All the leading zeros are omitted e.g. 15900 gives 951. So this way the encoding can not completely be deciphered and has some loss of information.

HackerMan is further thinking of complicating the process and he needs your help. He decides to add the two flipped numbers and print the result in the encoded (flipped) form. There is one problem in this method though. For example, 134 could be 431 , 4310 or 43100 before reversing. Hence the method ensures that no zeros were lost, that is it can be assumed that the original number was 431 .
Problem taken from the Practice for Coding-Hackerearth.com*/

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;	
	int a, b, c, d,e;		
	while(num){
		cin>>a>>b;
		c=0;

		while(a){
			e=a%10;
			c=c*10+e;
			a=a/10;
		}
		d=0;

		while(b){
			e=b%10;
			d=d*10+e;
			b=b/10;
		}
		a=c+d;
		b=0;
		while(a){
			e=a%10;
			b=b*10+e;
			a=a/10;
		}
		cout<<b<<endl;		
		num--;
	}							
return 0;		
}
