package mooc.vandy.java4android.calculator.logic;

import mooc.vandy.java4android.calculator.ui.ActivityInterface;

/**
 * Perform the Multiply operation.
 */
public class Multiply extends Operations{
    // TODO - add your solution here.

    private int num1,num2;

    //constructor
    public Multiply(int num1, int num2, ActivityInterface mOut){
        super(mOut);
        setNum1(num1);
        setNum2(num2);
    }

    //methods
    private void setNum1(int num1){
        this.num1 = num1;
    }
    private void setNum2(int num2){
        this.num2 = num2;
    }
    private int getNum1(){
        return num1;
    }
    private int getNum2(){
        return num2;
    }

    //overriding
    public void operate(){
        print( "" + (getNum1()*getNum2()) );
    }
}
