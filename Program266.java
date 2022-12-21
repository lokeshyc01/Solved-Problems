import java.util.*;

class ArrayX
{
    protected int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    protected void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter "+Arr.length + " elements ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println("Enter the element no : "+ (iCnt+1));
            Arr[iCnt] = sobj.nextInt();
        }
        sobj.close();
    }

    protected void Display()
    {
        System.out.println("Elements of array are : ");

        for(int iCnt =0; iCnt < Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }

        System.out.println();
    }
}

class MarvellousX extends ArrayX
{
    public MarvellousX(int iSize)
    {
        super(iSize);
    }

    public boolean Palindrome()
    {
        int Start = 0,End = Arr.length-1;
        boolean Flag = true;

        while(Start<End)
        {
            if(Arr[Start] != Arr[End])
            {
                Flag = false;
                break;
            }
            Start++;
            End--;
        }
        return Flag;
    }
}

class Program266
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array that you want to create ");
        int iSize = sobj.nextInt();

        MarvellousX obj = new MarvellousX(iSize);
        
        obj.Accept();
        obj.Display();

        boolean bRet = obj.Palindrome();

        if(bRet == true)
        {
            System.out.println("Array is Palindrome\n");
        }
        else
        {
            System.out.println("Array is not Palindrome\n");
        }
        sobj.close();
    }
}