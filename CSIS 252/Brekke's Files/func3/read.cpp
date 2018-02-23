void read(int numbers[], int& count)
{
   count = 0; // since it wasn't function input
   cout << "enter ints, " << sentinel << " to quit: ";
   int num;
   cin >> num;
   while (num != sentinel && count < arraysize)
   {
      numbers[count] = num;
      count++;
      cin >> num;
   }
}
