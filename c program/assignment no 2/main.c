#include <stdio.h>


int main()

 {

  int doctors,nurses,rooms,patients,roomsavailable;
  printf("total no of doctors=");
  scanf("%d",&doctors);
  printf("total no of nurses=");
  scanf("%d",&nurses);
  printf("total no of patients=");
  scanf("%d",&patients);
  printf("total no of rooms=");
  scanf("%d",&rooms);
  roomsavailable=rooms-patients;
  printf("total no of rooms available=%d\n",roomsavailable);
	return 0;
}


