int search(const int numbers[],int count, int searchValue)
{
   bool found=false;
   int pos=0;
   while (!found && pos<count)
   {
      if (numbers[pos] == searchValue)
         found = true;
      else
         pos++;
   }
   if (found)
      return pos;
   else
      return -1;
}

