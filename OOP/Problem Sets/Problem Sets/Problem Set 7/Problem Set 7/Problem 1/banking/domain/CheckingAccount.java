package banking.domain;

public class CheckingAccount extends Account{

	private double overdraftProtection;

	public CheckingAccount(double balance) {
		super(balance);
	}

	public CheckingAccount(double balance, double protect) {
		super(balance);
		this.overdraftProtection = protect;
	}

	@Override
	public boolean withdraw(double amt) {
		if(this.balance - amt >= 0) {
			this.balance -= amt;
			return true;
		}
		else if(this.overdraftProtection > 0)
		{
			double diff = amt - this.balance ;

			if(this.overdraftProtection - diff >= 0)
			{
				this.overdraftProtection -= diff;
				this.balance = 0;
				return true;
			}	
		}
		return false;
	}
}