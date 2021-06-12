import smtplib

sender = 'varghesebabu101@gmail.com'
receivers = ['varghesebabu@ieee.org']

message = """From: From Sutty <varghesebabu101@gmail.com>
To: Varghese Babu  <varghesebabu@ieee.org>
Subject: Test mail

This is a test e-mail message.
"""

try:
   smtpObj = smtplib.SMTP('localhost')
   smtpObj.sendmail(sender, receivers, message)         
   print ("Successfully sent email")
except SMTPException:
   print ("Error: unable to send email")
