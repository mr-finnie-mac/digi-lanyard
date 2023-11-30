// display_texts.c
#include "display_texts.h"

// Array of display information corresponding to each disability type
const DisabilityInfo displayInfosEN[] = {
    {"No disability", "You don't have any specific disability."},
    {"Visual impairment", "Approach calmly and provide assistance if requested."},
    {"Auditory impairment", "Use visual cues and speak clearly."},
    {"Mobility impairment", "Be mindful of their mobility needs."},
    {"Neurodivergent", "Autism is a neurodevelopmental condition that affects social interaction, communication, and behavior. "
        "I may have difficulty in loud or busy environments"
        "Please be patient, use clear and direct communication"},
};

// Array of display information corresponding to each disability type
const DisabilityInfo displayInfosES[] = {
    {"No hay discapacidad", "No tienes ninguna discapacidad específica."},
    {"Discapacidad visual", "Acércate con calma y brinda ayuda si es necesario."},
    {"Discapacidad auditiva", "Utiliza señales visuales y habla claramente."},
    {"Discapacidad de movilidad", "Ten en cuenta sus necesidades de movilidad."},
    {"Neurodivergente", "El autismo es un trastorno del neurodesarrollo que afecta la interacción social, la comunicación y el comportamiento. "
        "Puedo tener dificultades en entornos ruidosos o concurridos. "
        "Por favor, sea paciente, utilice una comunicación clara y directa."},

  
};
const DisabilityInfo displayInfosFR[] = {
    {"Pas de handicap", "Vous n'avez aucun handicap spécifique."},
    {"Handicap visuel", "Approchez calmement et fournissez de l'aide si nécessaire."},
    {"Handicap auditif", "Utilisez des signaux visuels et parlez clairement."},
    {"Handicap de mobilité", "Soyez attentif à leurs besoins de mobilité."},
    {"Neurodivergent", "L'autisme est un trouble du neurodéveloppement qui affecte l'interaction sociale, la communication et le comportement. "
        "Je peux avoir des difficultés dans des environnements bruyants ou animés. "
        "S'il vous plaît, soyez patient, utilisez une communication claire et directe."},

};

const DisabilityInfo displayInfosDE[] = {
    {"Keine Behinderung", "Sie haben keine spezifische Behinderung."},
    {"Sehbehinderung", "Nähern Sie sich ruhig und bieten Sie Hilfe an, wenn nötig."},
    {"Hörbehinderung", "Verwenden Sie visuelle Hinweise und sprechen Sie deutlich."},
    {"Bewegungseinschränkung", "Beachten Sie ihre Mobilitätsbedürfnisse."},
    {"Neurodivergent", "Autismus ist eine neurologische Entwicklungsstörung, die die soziale Interaktion, Kommunikation und das Verhalten beeinflusst. "
        "Ich kann Schwierigkeiten in lauten oder belebten Umgebungen haben. "
        "Bitte haben Sie Geduld, verwenden Sie klare und direkte Kommunikation."},
};


// Function to get display information based on the disability type and language
const DisabilityInfo* getDisplayInfo(int disabilityType, Language language) {
    switch (language) {
        case ENGLISH:
            if (disabilityType >= 0 && disabilityType < sizeof(displayInfosEN) / sizeof(displayInfosEN[0])) {
                return &displayInfosEN[disabilityType];
            } else {
                return nullptr;
            }
            break;

        case SPANISH:
            if (disabilityType >= 0 && disabilityType < sizeof(displayInfosES) / sizeof(displayInfosES[0])) {
                return &displayInfosES[disabilityType];
            } else {
                return nullptr;
            }
            break;

        case FRENCH:
            if (disabilityType >= 0 && disabilityType < sizeof(displayInfosFR) / sizeof(displayInfosFR[0])) {
                return &displayInfosFR[disabilityType];
            } else {
                return nullptr;
            }
            break;
        case GERMAN:
            if (disabilityType >= 0 && disabilityType < sizeof(displayInfosDE) / sizeof(displayInfosDE[0])) {
                return &displayInfosDE[disabilityType];
            } else {
                return nullptr;
            }
            break;
        default:
            return nullptr;
    }
}


// Function to get display information based on the disability type
const DisabilityInfo* getDisplayInfoES(int disabilityType) {
    if (disabilityType >= 0 && disabilityType < sizeof(displayInfosES) / sizeof(displayInfosES[0])) {
        return &displayInfosES[disabilityType];
    } else {
        return 0;
    }
}


