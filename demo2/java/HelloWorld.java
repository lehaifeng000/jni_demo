import java.util.Arrays;
class HelloWorld
{
    public native void displayHelloWorld();
    public native int add(int a, int b);
    public native int [] getarr(int n);
    static {
        System.loadLibrary("hello");
    }
   
    public static void main(String[] args) {
        HelloWorld hello = new HelloWorld();
        hello.displayHelloWorld();
        // int ret = hello.add(10,20);
        System.out.println(hello.add(10,20));
        // System.out.println(ret);
        int []arr=hello.getarr(4);
        System.out.println(Arrays.toString(arr));
    }
}