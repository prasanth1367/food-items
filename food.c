 #include<stdio.h>
 main()
{
	printf("pick an item : \n1.pizza,Rs 239\n2. burger,Rs 129\n3. pasta,Rs 179\n4. french fries,Rs 99\n5. sandwich,Rs 149");
	int choice=0;
	scanf("%d",&choice);
	
	switch(choice)
	{
	case 1:
		printf("food item-pizza\n price-Rs 239.");
		 break;
	case 2:
		printf("food item-burgger\n price-Rs 129.");
	 	break;
	case 3:
		printf("food item-pasta\n price-Rs 179.");
		break;
	case 4:
		printf("food item-french fries\n price-Rs 99.");
		break;
	case 5:
		printf("food item-sandwich\n price-Rs 149.");
		break;
		default:
			printf("default");
	
}
}
