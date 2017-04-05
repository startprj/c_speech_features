void mfcc(const short* signal,
          unsigned int signal_len,
          int samplerate,
          csf_float winlen,
          csf_float winstep,
          int numcep,
          int nfilt,
          int nfft,
          int lowfreq,
          int highfreq,
          csf_float preemph,
          int ceplifter,
          int appendEnergy,
          csf_float* winfunc,
          csf_float** mfcc,
          int* mfcc_dim1,
          int* mfcc_dim2);

void fbank(const short* signal,
           unsigned int signal_len,
           int samplerate,
           csf_float winlen,
           csf_float winstep,
           int nfilt,
           int nfft,
           int lowfreq,
           int highfreq,
           csf_float preemph,
           csf_float* winfunc,
           csf_float** features,
           int* features_dim1,
           int* features_dim2,
           csf_float** energy,
           int* energy_dim1);

void logfbank(const short* signal,
              unsigned int signal_len,
              int samplerate,
              csf_float winlen,
              csf_float winstep,
              int nfilt,
              int nfft,
              int lowfreq,
              int highfreq,
              csf_float preemph,
              csf_float* winfunc,
              csf_float** features,
              int* features_dim1,
              int* features_dim2);

void ssc(const short* signal,
         unsigned int signal_len,
         int samplerate,
         csf_float winlen,
         csf_float winstep,
         int nfilt,
         int nfft,
         int lowfreq,
         int highfreq,
         csf_float preemph,
         csf_float* winfunc,
         csf_float** features,
         int* features_dim1,
         int* features_dim2);

csf_float hz2mel(csf_float hz);

csf_float mel2hz(csf_float mel);

void get_filterbanks(int nfilt,
                     int nfft,
                     int samplerate,
                     int lowfreq,
                     int highfreq,
                     csf_float** filterbanks,
                     int* filterbanks_dim1,
                     int* filterbanks_dim2);

void lifter(csf_float* cepstra,
            int cepstra_dim1,
            int cepstra_dim2,
            int L,
            csf_float** cepstra_out,
            int* cepstra_out_dim1,
            int* cepstra_out_dim2);

void delta(csf_float* feat,
           int feat_dim1,
           int feat_dim2,
           int N,
           csf_float** delta,
           int* delta_dim1,
           int* delta_dim2);

// Sigproc

void framesig(csf_float* sig,
              unsigned int sig_len,
              int frame_len,
              int frame_step,
              csf_float* winfunc,
              csf_float** frames,
              int* frames_dim1,
              int* frames_dim2);

void deframesig(csf_float* frames,
                int frames_dim1,
                int frames_dim2,
                int siglen,
                int frame_len,
                int frame_step,
                csf_float* winfunc,
                csf_float** signal,
                int* signal_dim1);

void magspec(csf_float* frames,
             int frames_dim1,
             int frames_dim2,
             int NFFT,
             csf_float** magspec,
             int* magspec_dim1,
             int* magspec_dim2);

void powspec(csf_float* frames,
             int frames_dim1,
             int frames_dim2,
             int NFFT,
             csf_float** powspec,
             int* powspec_dim1,
             int* powspec_dim2);

void logpowspec(csf_float* frames,
                int frames_dim1,
                int frames_dim2,
                int NFFT,
                int norm,
                csf_float** logpowspec,
                int* logpowspec_dim1,
                int* logpowspec_dim2);

void preemphasis(const short* signal,
                 unsigned int signal_len,
                 csf_float coeff,
                 csf_float** preemph,
                 int* preemph_dim1);
