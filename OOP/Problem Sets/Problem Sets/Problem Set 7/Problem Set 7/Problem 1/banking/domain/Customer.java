package banking.domain;
import java.util.*;

public class Customer {
    private String firstName;
    private String lastName;
    private ArrayList<Account> accounts; 

    public Customer(String f, String l) {
        this.firstName = f;
        this.lastName = l;
        this.accounts = new ArrayList<Account>();
    }

    public String getFirstName() {
        return this.firstName;
    }

    public String getLastName() {
        return this.lastName;
    }

    public void addAccount(Account act) {
        this.accounts.add(act);
    }

    public Account getAccount(int index) {
        return this.accounts.get(index);
    }

    public int getNumOfAccounts() {
        return this.accounts.size();
    }
}
