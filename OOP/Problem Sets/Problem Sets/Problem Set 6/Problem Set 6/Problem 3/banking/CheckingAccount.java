package banking;

public class CheckingAccount extends Account{

	private SavingsAccount protectedBy;

	public CheckingAccount(double balance) {
		super(balance);
		this.protectedBy = null;
	}

	public CheckingAccount(double balance, SavingsAccount protect) {
		super(balance);
		this.protectedBy = protect;
	}

	@Override
	public boolean withdraw(double amt) {
		if(this.balance - amt >= 0) 
		{
			this.balance -= amt;
			return true;
		} 
		else if(this.protectedBy != null)
		{
			double diff = amt - this.balance;
			if(this.protectedBy.getBalance() >= diff ) 
			{
				this.protectedBy.balance -= diff;
				this.balance = 0;
				return true;
			}
		}
		return false;
	}
}
