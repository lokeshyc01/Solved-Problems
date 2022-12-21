import java.util.*;

class MarvellousX
{
    public void Display(String s)
    {
        for(int i = 0; i < s.length(); i++)
        {
            System.out.println(s.charAt(i));
        }  
    }
}

class Program270
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter your full name");
        String str = sobj.nextLine();

        MarvellousX obj = new MarvellousX();
        obj.Display(str);      
    }
}