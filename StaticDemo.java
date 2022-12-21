
class StaticDemo
{
    static
    {
        System.out.println("Inside static block of StaticDemo class which contains main");
    }
    public StaticDemo()
    {
        System.out.println("Inside constructor of StaticDemo");
    }
    public static void main(String arg[])
    {
        System.out.println("Inside main");
        System.out.println("Value of static No3 is : "+Demo.No3); //Demo::No3
        System.out.println("Value of static No4 is : "+Demo.No4); //Demo::No4
        Demo.gun();

        Demo obj1 = new Demo();
        Demo obj2 = new Demo();


        obj1.Fun();
    }
}

class Demo
{
    public int No1;
    public int No2;
    public static int No3;              //static characterstics
    public static int No4;              //static characterstics

    static                              //static block
    {
        System.out.println("Inside static block of Demo class");
        No3 = 51;
        No4 = 101;
    }
    public Demo()                        //Constructor
    {
        System.out.println("Inside constructor");
        No1 = 11;
        No2 = 21;
    }
    public void Fun()                   //Non static method
    {
        //Non static method can access static as well as non static data
        // we can use this keyword
        System.out.println("Inside non static method fun");
        System.out.println("Value of No1 :"+this.No1);
        System.out.println("Value of No2 : "+this.No2);
        System.out.println("Value of No3 : "+this.No3);
        System.out.println("Value of No4 : "+this.No4);
    }
    public static void gun()            //Static Method
    {
        // Static method can access only static data
        // we cant use this keyword
        System.out.println("Inside static method gun");
        System.out.println("Inside non static method fun");
        // System.out.println("Value of No1 :"+No1);
        // System.out.println("Value of No2 : "+No2);
        System.out.println("Value of No3 : "+No3);
        System.out.println("Value of No4 : "+No4);
    }
}