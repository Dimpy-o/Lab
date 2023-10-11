using System;

public class Shop
{
    public static void Main(string[] args)
    {
        int[] price = {18, 17, 33, 35};
        string[] vegetables = {"potato", "carrot", "cucumber", "tomato"};
        for (int i = 0; i < vegetables.Length; i++)
        {
            Console.Write(vegetables[i]);
            Console.Write(": ");
            Console.WriteLine(price[i]);
        }
    }
}