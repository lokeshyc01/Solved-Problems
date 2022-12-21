import java.util.*;

class Program275
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a String");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();
        
        for(int i = 0; i<Arr.length;i++)
        {
            System.out.println(Arr[i]);
        }
    }
}