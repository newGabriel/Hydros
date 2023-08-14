#ifndef HYDROS_HPP
#define HYDROS_HPP


#ifndef CHUVEIRO
#define CHUVEIRO

class Chveiro{
    
    public:
    Chveiro();
    ~Chveiro();

    void setStatus(bool s);

    private:
    float vazao; //eu usaria double para evitar problema de arredondamento
    bool status;

};

#endif

#ifndef VASO
#define VASO

class VasoSanitario{
    public:
    VasoSanitario();
    ~VasoSanitario();
    
    void setStatus(bool s);

    private:
    float vazao;
    bool status;
};

#endif

#ifndef PIA
#define PIA

class Pia{
    public:
    Pia();
    ~Pia();

    void setStatus(bool s);

    private:
    float vazao;
    bool status;
};

#endif

#ifndef SanitarioP
#define SanitarioP

class SanitarioPublico{
    public:
    VasoSanitario vaso;
    Pia pia;
};

#endif

#ifndef BANHEIRO_P
#define BANHEIRO_P

class BanheiroPublico : SanitarioPublico{
    public:
    BanheiroPublico();
    ~BanheiroPublico();

    void setStatus(bool s);
    
    private:
    Chveiro Chuveiro;
};

#endif

#endif


/*
Obs.: As classes Pia, VasoSanitario e Chuveiro possuem os mesmos atributos talvez fosse interessante adicionar criar uma super classe para elas.
*/