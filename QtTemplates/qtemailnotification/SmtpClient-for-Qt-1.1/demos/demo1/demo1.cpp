#include <QtCore>

#include "../../src/SmtpMime"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // This is a first demo application of the SmtpClient for Qt project


    // First we need to create an SmtpClient object
    // We will use the Gmail's smtp server (smtp.gmail.com, port 465, ssl)

    SmtpClient smtp("smtp.gmail.com", 465, SmtpClient::SslConnection);

    // We need to set the username (your email address) and password
    // for smtp authentification.

    smtp.setUser("skywall.backup@spundhan.com");
    smtp.setPassword("4ur101dkrjMvDis45gf");

    // Now we create a MimeMessage object. This is the email.

    MimeMessage message;

    EmailAddress sender("skywall.backup@spundhan.com", "skywallbclient");
    message.setSender(&sender);

    EmailAddress to("govind.mastamardi@spundhan.com", "govindra");
    message.addRecipient(&to);

    message.setSubject("SmtpClient for Qt - Demo");

    // Now add some text to the email.
    // First we create a MimeText object.

    MimeText text;

    text.setText("Hi,\nThis is a simple email message.sent from Geeta .Benni\n");

    // Now add it to the mail

    message.addPart(&text);

    // Now we can send the mail

    if (!smtp.connectToHost()) {
        qDebug() << "Failed to connect to host!" << endl;
        return -1;
    }

    if (!smtp.login()) {
        qDebug() << "Failed to login!" << endl;
        return -2;
    }

    if (!smtp.sendMail(message)) {
        qDebug() << "Failed to send mail!" << endl;
        return -3;
    }

    smtp.quit();

}
