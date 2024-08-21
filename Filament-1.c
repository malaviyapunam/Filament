main() 
{
    char str[100];
    int start, end, l= 0, name= 1;

    printf("Enter any string: ");
    scanf("%s", str);

    while (str[l] != '\0') 
	{
        l++;
    }

    start = 0;
    end = l-1;

    while (start < end) 
	{
        if (str[start] != str[end])
		{
            name = 0;
            break;
        }
        start++;
        end--;
    }

    if (name== 1) 
	{
        printf("The given string is a Palindrome.\n");
    } else 
	{
        printf("The given string is not a Palindrome.\n");
    }

}