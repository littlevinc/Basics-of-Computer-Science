#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


string encrypt(string text, int s)
{
    string result = "";

    for (int i = 0; i < text.length(); i++)
    {
        if (isupper(text[i]))
            result += char(int(text[i] + s - 65) % 26 + 65);

        else if (islower(text[i]))
            result += char(int(text[i] + s - 97) % 26 + 97);

        else
            result += text[i];
    }

    return result;
}


int main() {

    string txtdecry = "OTP NLPDLC - GPCDNSWFPDDPWFYR(LFNS LWD NLPDLC - NSTQQCP, "
        "NLPDLC - LWRZCTESXFD, NLPDLC - GPCDNSTPMFYR, GPCDNSTPMPNSTQQCP "
        "ZOPC LWD PTYQLNSPC NLPDLC MPKPTNSYPE) TDE PTY PTYQLNSPD DJXXPECTDNSPD "
        "GPCDNSWFPDDPWFYRDGPCQLSCPY, OLD LFQ OPC XZYZRCLASTDNSPY FYO "
        "XZYZLWASLMPETDNSPY DFMDETEFETZY MLDTPCE.LWD PTYPD OPC PTYQLNSDEPY "
        "FYO FYDTNSPCDEPY GPCQLSCPY OTPYE PD SPFEP SLFAEDLPNSWTNS OLKF, "
        "RCFYOACTYKTATPY OPC VCJAEZWZRTP LYDNSLFWTNS OLCKFDEPWWPY.OPC "
        "PTYQLNSSPTE SLWMPC HPCOPY ZQEXLWD YFC OTP 26 MFNSDELMPY OPD "
        "WLEPTYTDNSPY LWASLMPED ZSYP FYEPCDNSPTOFYR GZY RCZDD - "
        "FYO VWPTYMFNSDELMPY LWD LWASLMPE QFPC VWLCEPIE FYO RPSPTXEPIE GPCHPYOPE "
        "FYO DZYOPCKPTNSPY, DLEKKPTNSPY FDH. YTNSE MPLNSEPE.";


    int count[27] = { 0 };

    // Analyse der Buchstaben
    for (char buch = 'A'; buch <= 'Z'; buch++) {
        for (int i = 0; i < txtdecry.length(); i++) {

            if (txtdecry.at(i) == buch) {
                count[int(buch) - 65]++;
            }
        }

    }

    int max = count[0];
    int maxpos = 0;

    for (int i = 0; i < 27; i++) {
        if (count[i] > max) {
            max = count[i];
            maxpos = i;
        }
    }

    cout << "Vorkommen: " << max << " Stelle: " << maxpos << endl;

    cout << encrypt(txtdecry, (26 - (26 - maxpos)));



    


}