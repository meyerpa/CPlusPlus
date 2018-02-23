int biggest(const int numbers[],int count)
{
   int biggest = numbers[0];
   for (int i=0; i<count; i++)
      if (numbers[i] > biggest)
         biggest = numbers[i];
   return biggest;
}

