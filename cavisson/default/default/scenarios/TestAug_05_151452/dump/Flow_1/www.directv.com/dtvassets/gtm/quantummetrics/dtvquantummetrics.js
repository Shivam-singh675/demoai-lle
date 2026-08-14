(function() {
    function loadQuantumMetric() {
        if (window.QuantumMetricAPI) return;
        var qtm = document.createElement('script');
        qtm.type = 'text/javascript';
        qtm.async = true;
        qtm.src = 'https://cdn.quantummetric.com/qscripts/quantum-dtv.js';
        var d = document.getElementsByTagName('script')[0];
        d.parentNode.insertBefore(qtm, d);
        console.log("DTV - Quantum Metric Tag Fired Successfully (deferred)");
    }

    // Wait for load event first, THEN wait for idle
    if (document.readyState === 'complete') {
        if ('requestIdleCallback' in window) {
            requestIdleCallback(loadQuantumMetric, { timeout: 5000 });
        } else {
            setTimeout(loadQuantumMetric, 3000);
        }
    } else {
        window.addEventListener('load', function() {
            if ('requestIdleCallback' in window) {
                requestIdleCallback(loadQuantumMetric, { timeout: 5000 });
            } else {
                setTimeout(loadQuantumMetric, 3000);
            }
        });
    }
})();
