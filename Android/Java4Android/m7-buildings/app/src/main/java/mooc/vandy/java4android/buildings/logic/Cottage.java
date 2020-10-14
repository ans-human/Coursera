package mooc.vandy.java4android.buildings.logic;

/**
 * This is the cottage class file.  It is a subclass of House.
 */
public class Cottage
       extends House {

    // TODO - Put your code here.
    private boolean mSecondFloor;

    //constructors
    public Cottage(int dimension, int lotLength, int lotWidth){
        super(dimension, dimension, lotLength, lotWidth);
    }
    public Cottage(int dimension, int lotLength, int lotWidth, String owner, boolean secondFloor){
        super(dimension, dimension, lotLength, lotWidth, owner);
        mSecondFloor = secondFloor;
    }
    public boolean hasSecondFloor () {
        return mSecondFloor;
    }
    public String toString() {
        String s = super.toString();
        if( hasSecondFloor()) s += "; is a two story cottage";
        return s;
    }
}

