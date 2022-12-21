import java.util.*;
/*
 Input : hello

 output : 
            h e l l o
            h e l l o
            h e l l o
            h e l l o

 */

class Pattern
{
    public void Display(String s)
    {
       char Arr [] = s.toCharArray();


        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr.length;j++)
            {
                System.out.print(Arr[j]+"\t");
            }
            System.out.println();
        }
    }
}

class Program296
{
    public static void main(String a[])
    {
        Pattern pobj = new Pattern();
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String s = sobj.nextLine();

        pobj.Display(s);

       
        
    }
}