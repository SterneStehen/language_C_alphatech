#include <stdint.h>

int get_per(int width, int height)
{
	return(2*(width+height));

}

int main()
{
	int w = 3, h = 5;
	get_per(w,h);
	int per1 = get_per(w,h);
	int per2 = get_per(w+1, h+2);
	int per3 = get_per(w, 8);
	return 0;
}