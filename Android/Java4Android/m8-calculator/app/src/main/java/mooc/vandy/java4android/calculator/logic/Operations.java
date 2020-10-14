package mooc.vandy.java4android.calculator.logic;

import mooc.vandy.java4android.calculator.ui.ActivityInterface;
public abstract class Operations {
    private ActivityInterface mOut;

    public Operations(){}
    public Operations(ActivityInterface out){
        mOut = out;
    }

    abstract void operate();

    protected void print(String output){
        mOut.print(output);
    }
}
