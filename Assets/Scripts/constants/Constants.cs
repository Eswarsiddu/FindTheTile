using System;
using System.Collections.Generic;

// golden ratio : 1.62

public class Constants
{
    public static System.Random random = new System.Random();

    private static string twoDigits(int number)
    {
        if (number >= 10)
        {
            return number.ToString();
        }
        return "0" + number.ToString();
    }

    public static string timeToText(int time)
    {
        string text = "";
        int hours = time / 3600;
        if (hours != 0)
        {
            text += twoDigits(hours) + ":";
        }
        int remaining = time % 3600;
        int minutes = remaining / 60;
        text += twoDigits(minutes) + ":";
        remaining = remaining % 60;
        text += twoDigits(remaining);
        return text;
    }
}

public static class Extentions
{
    public static void Shuffle<T>(this IList<T> list)
    {
        int n = list.Count;
        while (n > 1)
        {
            n--;
            int k = Constants.random.Next(n + 1);
            T value = list[k];
            list[k] = list[n];
            list[n] = value;
        }
    }

    public static void Slice<T>(this IList<T> list, int noOfElements)
    {
        int n = list.Count;
        if (noOfElements >= n || noOfElements < 0) return;
        for (int i = n - 1; i >= noOfElements; i--)
        {
            list.RemoveAt(i);
        }
    }

}
