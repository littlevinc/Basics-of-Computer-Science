#include <iostream>
#include <string>
using namespace std;

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

    for (char buch = 'A'; buch <= 'Z' ; buch++ ) {

        for (int i = 0; i < txtdecry.length(); i++ ) {

            if(txtdecry.at(i) == buch) {
                count[int(buch) - 65]++;
             }
        }

    }

    char ch = 'A';


    for(int x = 0; x < 26; x++) {
        cout << ch;
        cout << count[x] << endl;
        
        ++ch;
    }


}