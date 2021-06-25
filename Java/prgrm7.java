package Java;
class Bank {
    float getRateOfInterest() {
        return 0.0f;
    }
}

class SBI extends Bank {
    float getRateOfInterest() {
        return 5.5f;
    }
}

class AXIS extends Bank {
    float getRateOfInterest() {
        return 7.7f;
    }
}

class ICICI extends Bank {
    float getRateOfInterest() {
        return 8.8f;
    }
}

public class prgrm7 {
    public static void main(String[] args) {
        Bank obj;
        obj = new SBI();
        System.out.println("SBI ROI : " + obj.getRateOfInterest());
        obj = new AXIS();
        System.out.println("AXIS ROI : " + obj.getRateOfInterest());
        obj = new ICICI();
        System.out.println("ICICI ROI : " + obj.getRateOfInterest());
    }
}
