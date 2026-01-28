package banking;

public class Customer {
    private String firstName;
    private String lastName;
    private SavingsAccount savingsAccount;
    private CheckingAccount checkingAccount;

    public Customer(String f, String l) {
        this.firstName = f;
        this.lastName = l;
        this.savingsAccount = null; 
        this.checkingAccount = null; 
    }

    public String getFirstName() {
        return this.firstName;
    }

    public String getLastName() {
        return this.lastName;
    }

    public SavingsAccount getSavings() {
        return this.savingsAccount;
    }

    public CheckingAccount getChecking() {
        return this.checkingAccount;
    }

    public void setSavings(SavingsAccount account) {
        this.savingsAccount = account;
    }

    public void setChecking(CheckingAccount account) {
        this.checkingAccount = account;
    }
}
