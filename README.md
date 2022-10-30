# MCU_LAB2
In <strong>Ex4</strong>, we just need to halve the value of counter, so there's no reason to create a new project. <br />
<strong>Ex7 & Ex8</strong> in the same project folder <br />
<strong>Ex9 & Ex10</strong> in the same project folder

<h3>*Answer questions:</h3>
<h4>Ex1:</h4>
<p>The frequency of scanning process is 1Hz because the time interval of each state(2 states) is 0.5s so the full cycle time is 1s => f = 1/1 = 1Hz. <p>

<h4>Ex2:</h4>
<p>The frequency of scanning process is 0.5Hz because the time interval of each state(4 states) is 0.5s so the full cycle time is 2s => f = 1/2 = 0.5Hz. <p>

<h4>Ex6:</h4>
<p>1. If line 1 of the code is missing, the LED will not toggle because the value of timer0_counter is always 0 which cant make the condition timer0_counter > 0 so the  
  timer0_flag value is never 1.
<p>
<p>2. setTimer0(1) will make the waiting time for the first timer0_flag == 1 condition happens really short, thats why we can see the LED toggled immediately when we start stimulating. setTimer0(2000) then makes the LED toggles every 2 seconds.
<p>
<p>3. setTimer0(1) will make the waiting time for the first timer0_flag == 1 condition happens really short, thats why we can see the LED toggled immediately when we start stimulating. setTimer0(2000) then makes the LED toggles every 2 seconds.
<p> setTimer0(10) again will make the waiting time for the first timer0_flag == 1 condition happens really short, then the LED will toggle every 2 seconds as well as question 2. Instead of not blinking the LED like the case in question 1, the LED in this case does. 
  
